//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, UIViewController;

@protocol NavigateLogicControllerDelegate <NSObject>

@optional
- (NSURL *)getStreetViewUrl;
- (void)onPushViewController:(UIViewController *)arg1 Animated:(_Bool)arg2;
- (void)onPresentViewControlelr:(UIViewController *)arg1 Animated:(_Bool)arg2;
- (void)onStopLoading;
- (void)onStartLoading;
@end
