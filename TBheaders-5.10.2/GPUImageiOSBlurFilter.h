//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

@class GPUImageGaussianBlurFilter, GPUImageLuminanceRangeFilter, GPUImageSaturationFilter;

@interface GPUImageiOSBlurFilter : GPUImageFilterGroup
{
    GPUImageSaturationFilter *saturationFilter;	// 128 = 0x80
    GPUImageGaussianBlurFilter *blurFilter;	// 136 = 0x88
    GPUImageLuminanceRangeFilter *luminanceRangeFilter;	// 144 = 0x90
    double blurRadiusInPixels;	// 152 = 0x98
    double saturation;	// 160 = 0xa0
    double _downsampling;	// 168 = 0xa8
}

@property(nonatomic) double downsampling; // @synthesize downsampling=_downsampling;
- (void).cxx_destruct;
@property(nonatomic) double saturation; // @synthesize saturation;
@property(nonatomic) double blurRadiusInPixels; // @synthesize blurRadiusInPixels;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (id)init;

@end
