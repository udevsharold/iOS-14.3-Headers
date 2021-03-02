/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMLineShapeBuilder.h>

@class OADPath;

@interface CMFreeFormShapeBuilder : CMLineShapeBuilder {

	OADPath* _path;
	CGSize _space;

}
-(CGAffineTransform)affineTransform;
-(void)setPath:(id)arg1 ;
-(void)setSpace:(CGSize)arg1 ;
-(CGPathRef)copyShapeWithTransform:(CGAffineTransform)arg1 ;
-(CGPoint)_renderPathElement:(id)arg1 withTransform:(CGAffineTransform)arg2 inPath:(CGPathRef)arg3 ;
@end
