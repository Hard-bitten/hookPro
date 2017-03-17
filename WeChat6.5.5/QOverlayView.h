//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol QOverlay;

__attribute__((visibility("hidden")))
@interface QOverlayView : UIView
{
    struct CGPoint _offset;
    struct CGAffineTransform _offsetTran;
    id <QOverlay> _overlay;
}

@property(retain, nonatomic) id <QOverlay> overlay; // @synthesize overlay=_overlay;
- (void).cxx_destruct;
- (id)initWithOverlay:(id)arg1;
- (void)drawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
- (_Bool)canDrawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2;
- (CDStruct_02837cd9)mapRectForRect:(struct CGRect)arg1;
- (struct CGRect)rectForMapRect:(CDStruct_02837cd9)arg1;
- (CDStruct_c3b9c2ee)mapPointForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForMapPoint:(CDStruct_c3b9c2ee)arg1 modifyDeviationTransform:(struct CGAffineTransform *)arg2;
- (struct CGPoint)pointForMapPoint:(CDStruct_c3b9c2ee)arg1;
- (struct CGAffineTransform)conversionAffineTransform;
- (double)zoomScale;
- (id)mapView;
- (id)container;
- (void)updateOffsetAndDeviationTransform;

@end
