//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PersonalProfileCell.h"

@class RTLabel;

@interface MDHeaderCell : PersonalProfileCell
{
    RTLabel *_headerLabel;
}

@property(retain, nonatomic) RTLabel *headerLabel; // @synthesize headerLabel=_headerLabel;
- (void)refreshCellWithModel:(id)arg1;
- (void)dealloc;
- (id)initWithreuseIdentifier:(id)arg1;

@end
