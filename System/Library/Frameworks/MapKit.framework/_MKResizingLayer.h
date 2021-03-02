/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSMutableArray, NSArray;

@interface _MKResizingLayer : CALayer {

	NSMutableArray* _sizedLayers;
	BOOL _needsLayoutOnBoundsChange;

}

@property (assign,nonatomic) BOOL needsLayoutOnBoundsChange;                   //@synthesize needsLayoutOnBoundsChange=_needsLayoutOnBoundsChange - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sizeToBoundsLayers; 
-(void)setContentsScale:(double)arg1 ;
-(void)sizeSublayerToBounds:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setMask:(id)arg1 ;
-(NSArray *)sizeToBoundsLayers;
-(BOOL)needsLayoutOnBoundsChange;
-(void)setNeedsLayoutOnBoundsChange:(BOOL)arg1 ;
@end
