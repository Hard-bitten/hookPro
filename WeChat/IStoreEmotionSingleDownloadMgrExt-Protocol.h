//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SingleEmotionDownloadWrap;

@protocol IStoreEmotionSingleDownloadMgrExt <NSObject>

@optional
- (void)onSingleEmotionDownloadFailedWithMd5:(NSString *)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(SingleEmotionDownloadWrap *)arg1 andFilePath:(NSString *)arg2;
@end
