//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

@class NSString, UIButton, UILabel;

@interface MDRegBaseViewController : MDViewController
{
    UILabel *_labelTitle;
    UILabel *_labelSubTitle;
    UIButton *_nextButton;
    NSString *_leftItemTitle;
}

@property(copy, nonatomic) NSString *leftItemTitle; // @synthesize leftItemTitle=_leftItemTitle;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UILabel *labelSubTitle; // @synthesize labelSubTitle=_labelSubTitle;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
- (void).cxx_destruct;
- (void)returnClicked;
- (void)setUpTitleLabel;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
