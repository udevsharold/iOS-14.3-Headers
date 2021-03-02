/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ComplicationDisplay.framework/ComplicationDisplay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComplicationDisplay/ComplicationDisplay-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@class NSData;

@interface ComplicationDisplay.ComplicationHostingView : UIView <CLKMonochromeComplicationView> {

	 filterProvider;
	 inPreview;
	 model;
	 isMonochrome;
	 hostingViewController;
	 hostingViewWrapper;
	 rendersAsynchronously;
	 renderStatsHandler;
	 shouldCallRenderStatsHandlerOnMainQueue;
	 shouldAccentDesaturatedView;
	 supportsComplicationForeground;
	 viewData;
	 paused;

}

@property (retain,nonatomic) id<CLKMonochromeFilterProvider> filterProvider; 
@property (readonly,nonatomic) BOOL rendersAsynchronously; 
@property (copy,nonatomic) id renderStatsHandler; 
@property (assign,nonatomic) BOOL shouldCallRenderStatsHandlerOnMainQueue; 
@property (assign,nonatomic) BOOL shouldAccentDesaturatedView; 
@property (assign,nonatomic) BOOL supportsComplicationForeground; 
@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) CGRect bounds; 
@property (copy,nonatomic) NSData * viewData; 
@property (assign,nonatomic) BOOL paused; 
+(id)sync;
+(id)async;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(BOOL)paused;
-(CGRect)frame;
-(id)init;
-(CGRect)bounds;
-(void)setPaused:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)rendersAsynchronously;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setRenderStatsHandler:(id)arg1 ;
-(void)setViewData:(NSData *)arg1 ;
-(void)setShouldAccentDesaturatedView:(BOOL)arg1 ;
-(id)renderStatsHandler;
-(void)setShouldCallRenderStatsHandlerOnMainQueue:(BOOL)arg1 ;
-(void)waitForAsyncRendering;
-(id)initWithFrame:(CGRect)arg1 async:(BOOL)arg2 ;
-(BOOL)shouldCallRenderStatsHandlerOnMainQueue;
-(BOOL)shouldAccentDesaturatedView;
-(BOOL)supportsComplicationForeground;
-(void)setSupportsComplicationForeground:(BOOL)arg1 ;
-(NSData *)viewData;
@end
