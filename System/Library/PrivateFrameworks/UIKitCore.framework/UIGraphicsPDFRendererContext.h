/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGraphicsRendererContext.h>

@interface UIGraphicsPDFRendererContext : UIGraphicsRendererContext {

	BOOL _inPage;
	CGRect _documentBounds;
	CGRect _pageBounds;

}

@property (assign) CGRect documentBounds;                            //@synthesize documentBounds=_documentBounds - In the implementation block
@property (assign) CGRect pageBounds;                                //@synthesize pageBounds=_pageBounds - In the implementation block
@property (assign) BOOL inPage;                                      //@synthesize inPage=_inPage - In the implementation block
@property (nonatomic,readonly) CGRect pdfContextBounds; 
-(CGRect)pageBounds;
-(CGRect)pdfContextBounds;
-(CGRect)documentBounds;
-(void)setDocumentBounds:(CGRect)arg1 ;
-(void)setPageBounds:(CGRect)arg1 ;
-(void)addDestinationWithName:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)beginPage;
-(BOOL)inPage;
-(void)beginPageWithBounds:(CGRect)arg1 pageInfo:(id)arg2 ;
-(void)setURL:(id)arg1 forRect:(CGRect)arg2 ;
-(void)updateAuxInfo:(id)arg1 ;
-(void)setInPage:(BOOL)arg1 ;
-(void)setDestinationWithName:(id)arg1 forRect:(CGRect)arg2 ;
@end
