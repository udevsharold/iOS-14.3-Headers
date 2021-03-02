/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGraphicsRenderer.h>

@interface UIGraphicsPDFRenderer : UIGraphicsRenderer
+(CGContextRef)contextWithFormat:(id)arg1 ;
+(Class)rendererContextClass;
+(void)prepareCGContext:(CGContextRef)arg1 withRendererContext:(id)arg2 ;
-(id)init;
-(id)PDFDataWithActions:(/*^block*/id)arg1 ;
-(id)initWithBounds:(CGRect)arg1 ;
-(void)pushContext:(id)arg1 ;
-(id)initWithBounds:(CGRect)arg1 format:(id)arg2 ;
-(BOOL)writePDFToURL:(id)arg1 withActions:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)popContext:(id)arg1 ;
@end
