//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface ARNPath : NSObject
{
    float _duration;	// 8 = 0x8
    long long _distance;	// 16 = 0x10
    NSArray *_steps;	// 24 = 0x18
}

+ (id)modelWithDictionary:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
- (void).cxx_destruct;

@end
