/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/TSDWrappable.h>

@class SXTextExclusionPath, TSDWrapPolygon, NSString;

@interface SXTextExclusionPathWrapper : NSObject <TSDWrappable> {

	BOOL _isRectangular;
	SXTextExclusionPath* _exclusionPath;
	TSDWrapPolygon* _myWrapPolygon;

}

@property (nonatomic,readonly) BOOL isRectangular;                                      //@synthesize isRectangular=_isRectangular - In the implementation block
@property (nonatomic,readonly) TSDWrapPolygon * myWrapPolygon;                          //@synthesize myWrapPolygon=_myWrapPolygon - In the implementation block
@property (nonatomic,__weak,readonly) SXTextExclusionPath * exclusionPath;              //@synthesize exclusionPath=_exclusionPath - In the implementation block
@property (nonatomic,readonly) BOOL hasAlpha; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)parent;
-(int)wrapType;
-(BOOL)hasAlpha;
-(id)wrapPolygon;
-(SXTextExclusionPath *)exclusionPath;
-(CGRect)boundsInfluencingExteriorWrap;
-(CGRect)boundsInRoot;
-(id)initWithTextExclusionPath:(id)arg1 ;
-(BOOL)isRectangular;
-(TSDWrapPolygon *)myWrapPolygon;
-(BOOL)isHTMLWrap;
-(int)wrapDirection;
-(int)wrapFitType;
@end

