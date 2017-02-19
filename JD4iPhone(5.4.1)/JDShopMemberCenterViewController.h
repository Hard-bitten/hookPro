//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDShopMemberLodinViewDelegate.h"
#import "JDShopNoMemberViewDelegate.h"

@class JDShopMemberLevelView, JDShopMemberLodinView, JDShopMemberRuleView, JDShopNoMemberView, JDStoreNetwork, NSString, UIScrollView;

@interface JDShopMemberCenterViewController : JDViewController <JDShopMemberLodinViewDelegate, JDShopNoMemberViewDelegate>
{
    JDStoreNetwork *netWork;
    NSString *_vendorId;
    NSString *_shopId;
    JDShopMemberLevelView *_memberlevelview;
    JDShopMemberRuleView *_memberruleview;
    JDShopNoMemberView *_nomemberview;
    JDShopMemberLodinView *_memberlodinview;
    UIScrollView *_bgScrollView;
}

@property(retain, nonatomic) UIScrollView *bgScrollView; // @synthesize bgScrollView=_bgScrollView;
@property(retain, nonatomic) JDShopMemberLodinView *memberlodinview; // @synthesize memberlodinview=_memberlodinview;
@property(retain, nonatomic) JDShopNoMemberView *nomemberview; // @synthesize nomemberview=_nomemberview;
@property(retain, nonatomic) JDShopMemberRuleView *memberruleview; // @synthesize memberruleview=_memberruleview;
@property(retain, nonatomic) JDShopMemberLevelView *memberlevelview; // @synthesize memberlevelview=_memberlevelview;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSString *vendorId; // @synthesize vendorId=_vendorId;
- (void)reconnect;
- (void)finishView;
- (void)refreshViewAfterLogin;
- (void)getShopRule;
- (void)refreshViewWithDic:(id)arg1;
- (void)setUpUI;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init:(id)arg1 shopId:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
