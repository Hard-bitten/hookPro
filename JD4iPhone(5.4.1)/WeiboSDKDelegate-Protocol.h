//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WBBaseRequest, WBBaseResponse;

@protocol WeiboSDKDelegate <NSObject>
- (void)didReceiveWeiboResponse:(WBBaseResponse *)arg1;
- (void)didReceiveWeiboRequest:(WBBaseRequest *)arg1;
@end
