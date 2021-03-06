/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSReading/TSDLayout.h>
#import <TSDrawables/TSDWrappable.h>

@class TSDWrapPolygon, TSDBezierPath, NSString;

@interface TSDDrawableLayout : TSDLayout <TSDWrappable> {

	TSDWrapPolygon* mCachedWrapPolygon;
	TSDBezierPath* mCachedWrapPath;
	TSDBezierPath* mCachedExternalWrapPath;

}

@property (nonatomic,readonly) BOOL hasAlpha; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setGeometry:(id)arg1 ;
-(void)dealloc;
-(void)dragBy:(CGPoint)arg1 ;
-(int)wrapType;
-(BOOL)hasAlpha;
-(void)invalidate;
-(id)wrapPolygon;
-(CGRect)boundsInfluencingExteriorWrap;
-(CGRect)boundsInRoot;
-(BOOL)isHTMLWrap;
-(int)wrapDirection;
-(int)wrapFitType;
-(id)i_computeWrapPath;
-(id)i_wrapPath;
-(void)invalidateParentForWrap;
-(void)invalidateExteriorWrap;
-(void)processChangedProperty:(int)arg1 ;
-(void)parentDidChange;
-(void)i_invalidateWrap;
-(id)i_computeWrapPathClosed:(BOOL)arg1 ;
-(id)i_externalWrapPath;
-(BOOL)allowsConnections;
-(BOOL)supportsInspectorPositioning;
@end

