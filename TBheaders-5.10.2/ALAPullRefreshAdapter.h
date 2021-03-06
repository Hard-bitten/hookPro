//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ALAPullRefreshProtocol-Protocol.h"

@class NSString;
@protocol ALAPullRefreshProtocol;

@interface ALAPullRefreshAdapter : NSObject <ALAPullRefreshProtocol>
{
    id <ALAPullRefreshProtocol> _pullRefreshService;	// 8 = 0x8
}

@property(retain, nonatomic) id <ALAPullRefreshProtocol> pullRefreshService; // @synthesize pullRefreshService=_pullRefreshService;
- (void).cxx_destruct;
- (void)refreshScrollViewDidEndDragging;
- (void)refreshScrollViewDidScroll;
- (_Bool)isAnimatingWithScrollView:(id)arg1;
- (void)stopAnimatingWithScrollView:(id)arg1;
- (void)addPullToRefreshWithActionHandler:(CDUnknownBlockType)arg1 withScrollView:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

