//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol JIMIMSpeechRecognizerDelegate <NSObject>
- (void)resultSpeechRecText:(NSString *)arg1 errmsg:(NSString *)arg2;
- (void)stopSpeechRecText;
- (void)startSpeechRecText;
- (void)cancelSpeechRecText;
@end
