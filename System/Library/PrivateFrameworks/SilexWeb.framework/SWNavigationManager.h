/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SWNavigationManager.h>

@protocol SWNavigationManager <NSObject>
@required
-(void)removeObserver:(id)arg1;
-(void)addObserver:(id)arg1;
-(void)registerHandler:(id)arg1;
-(void)commitViewController:(id)arg1;
-(unsigned long long)actionForRequest:(id)arg1;
-(id)previewViewControllerForRequest:(id)arg1;
-(BOOL)shouldPreviewRequest:(id)arg1;
-(void)registerHandler:(id)arg1 scheme:(id)arg2;
-(void)registerHandler:(id)arg1 extension:(id)arg2;

@end


@class NSMutableArray, NSMutableDictionary, NSMutableSet, SWNavigationPreview, NSString;

@interface SWNavigationManager : NSObject <SWNavigationManager> {

	NSMutableArray* _handlers;
	NSMutableDictionary* _schemeHandlers;
	NSMutableDictionary* _extensionHandlers;
	NSMutableSet* _observers;
	SWNavigationPreview* _currentPreview;

}

@property (nonatomic,readonly) NSMutableArray * handlers;                            //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * schemeHandlers;                 //@synthesize schemeHandlers=_schemeHandlers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * extensionHandlers;              //@synthesize extensionHandlers=_extensionHandlers - In the implementation block
@property (nonatomic,readonly) NSMutableSet * observers;                             //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) SWNavigationPreview * currentPreview;                   //@synthesize currentPreview=_currentPreview - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(NSMutableSet *)observers;
-(void)addObserver:(id)arg1 ;
-(SWNavigationPreview *)currentPreview;
-(void)setCurrentPreview:(SWNavigationPreview *)arg1 ;
-(void)registerHandler:(id)arg1 ;
-(void)commitViewController:(id)arg1 ;
-(NSMutableArray *)handlers;
-(unsigned long long)actionForRequest:(id)arg1 ;
-(id)previewViewControllerForRequest:(id)arg1 ;
-(BOOL)shouldPreviewRequest:(id)arg1 ;
-(void)registerHandler:(id)arg1 scheme:(id)arg2 ;
-(void)registerHandler:(id)arg1 extension:(id)arg2 ;
-(NSMutableDictionary *)extensionHandlers;
-(NSMutableDictionary *)schemeHandlers;
@end

