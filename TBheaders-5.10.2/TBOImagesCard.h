//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOBaseCard.h"

@class NSMutableArray;
@protocol TBOSeperatorCard;

@interface TBOImagesCard : TBOBaseCard
{
    NSMutableArray<TBOSeperatorCard> *_picAds;	// 32 = 0x20
    double _height;	// 40 = 0x28
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) NSMutableArray<TBOSeperatorCard> *picAds; // @synthesize picAds=_picAds;
- (void).cxx_destruct;

@end
