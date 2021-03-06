/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTSettings.h>

@interface CSCoverSheetDismissGestureSettings : PTSettings {

	BOOL _usesGrapeFlags;
	BOOL _extendSwipeUpRegion;
	double _edgeRegionSize;
	double _recognizeAlongEdge;
	double _extendedEdgeRegionSize;
	double _extendedRegionInsetX;

}

@property (assign,nonatomic) BOOL usesGrapeFlags;                        //@synthesize usesGrapeFlags=_usesGrapeFlags - In the implementation block
@property (assign,nonatomic) double edgeRegionSize;                      //@synthesize edgeRegionSize=_edgeRegionSize - In the implementation block
@property (assign,nonatomic) double recognizeAlongEdge;                  //@synthesize recognizeAlongEdge=_recognizeAlongEdge - In the implementation block
@property (assign,nonatomic) BOOL extendSwipeUpRegion;                   //@synthesize extendSwipeUpRegion=_extendSwipeUpRegion - In the implementation block
@property (assign,nonatomic) double extendedEdgeRegionSize;              //@synthesize extendedEdgeRegionSize=_extendedEdgeRegionSize - In the implementation block
@property (assign,nonatomic) double extendedRegionInsetX;                //@synthesize extendedRegionInsetX=_extendedRegionInsetX - In the implementation block
+(id)settingsControllerModule;
-(void)setUsesGrapeFlags:(BOOL)arg1 ;
-(void)setDefaultValues;
-(void)setExtendedEdgeRegionSize:(double)arg1 ;
-(void)setExtendedRegionInsetX:(double)arg1 ;
-(BOOL)usesGrapeFlags;
-(double)edgeRegionSize;
-(double)extendedRegionInsetX;
-(double)recognizeAlongEdge;
-(double)extendedEdgeRegionSize;
-(void)setExtendSwipeUpRegion:(BOOL)arg1 ;
-(void)setEdgeRegionSize:(double)arg1 ;
-(void)setRecognizeAlongEdge:(double)arg1 ;
-(BOOL)extendSwipeUpRegion;
@end

