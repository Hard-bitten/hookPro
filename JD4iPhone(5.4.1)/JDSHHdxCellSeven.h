//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASCellNode.h"

@class ASTextNode;

@interface JDSHHdxCellSeven : ASCellNode
{
    struct CGSize labelSize;
    ASTextNode *_moreGoodStuffNode;
}

@property(retain, nonatomic) ASTextNode *moreGoodStuffNode; // @synthesize moreGoodStuffNode=_moreGoodStuffNode;
- (void).cxx_destruct;
- (struct CGSize)calculateSizeThatFits:(struct CGSize)arg1;
- (id)p_currentNavigationController;
- (void)p_moreButtonClicked;
- (void)layout;
- (id)init;

@end
