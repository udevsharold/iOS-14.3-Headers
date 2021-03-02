/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CCViewRendererDelegateInterface.h>

@class CCVegaRenderer;

@interface CCViewRendererDelegate : NSObject <CCViewRendererDelegateInterface> {

	CCVegaRenderer* vegaRenderer;

}

@property (__weak) CCVegaRenderer * vegaRenderer; 
-(void)setVegaRenderer:(CCVegaRenderer *)arg1 ;
-(CCVegaRenderer *)vegaRenderer;
-(void)updateNativeView;
-(void)loadURL:(id)arg1 options:(id)arg2 withCallback:(id)arg3 ;
-(id)initWithVegaRenderer:(id)arg1 ;
@end
