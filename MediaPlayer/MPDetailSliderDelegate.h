/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSObject.h"


@protocol MPDetailSliderDelegate <NSObject>
@optional
-(void)detailSliderTrackingDidBegin:(id)detailSliderTracking;
-(void)detailSliderTrackingDidEnd:(id)detailSliderTracking;
-(void)detailSliderTrackingDidCancel:(id)detailSliderTracking;
-(void)detailSlider:(id)slider didChangeValue:(float)value;
-(void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;
@end

