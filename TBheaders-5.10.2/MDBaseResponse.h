//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MDBaseResponse : NSObject
{
    int _errCode;	// 8 = 0x8
    NSString *_errMessage;	// 16 = 0x10
}

@property(retain, nonatomic) NSString *errMessage; // @synthesize errMessage=_errMessage;
@property(nonatomic) int errCode; // @synthesize errCode=_errCode;
- (void).cxx_destruct;

@end
