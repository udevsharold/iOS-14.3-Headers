/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/SUScriptNativeObject.h>

@class SUClientInterface, SUSection, NSString;

@interface SUNavigationController : UINavigationController <SUScriptNativeObject> {

	BOOL _canBeWeakScriptReference;
	SUClientInterface* _clientInterface;
	SUSection* _section;
	long long _storeBarStyle;
	BOOL _skLoading;

}

@property (assign,getter=isSkLoading,nonatomic) BOOL skLoading;                //@synthesize skLoading=_skLoading - In the implementation block
@property (nonatomic,retain) SUClientInterface * clientInterface;              //@synthesize clientInterface=_clientInterface - In the implementation block
@property (nonatomic,retain) SUSection * section;                              //@synthesize section=_section - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewControllers:(id)arg1 ;
-(SUSection *)section;
-(void)removeChildViewController:(id)arg1 ;
-(void)setSection:(SUSection *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)addChildViewController:(id)arg1 ;
-(void)dealloc;
-(void)setToolbarHidden:(BOOL)arg1 ;
-(void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2 ;
-(NSString *)description;
-(id)moreListImage;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithSection:(id)arg1 ;
-(id)initWithRootViewController:(id)arg1 ;
-(void)setParentViewController:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(id)moreListSelectedImage;
-(SUClientInterface *)clientInterface;
-(void)setClientInterface:(SUClientInterface *)arg1 ;
-(void)setSkLoading:(BOOL)arg1 ;
-(BOOL)isSkLoading;
-(long long)ITunesStoreUIBarStyle;
-(void)_setStoreBarStyle:(long long)arg1 clientInterface:(id)arg2 ;
-(id)copyArchivableContext;
-(id)initWithSection:(id)arg1 rootViewController:(id)arg2 ;
-(void)restoreArchivableContext:(id)arg1 ;
-(id)_sectionForViewController:(id)arg1 ;
-(BOOL)clearsWeakScriptReferences;
-(void)_loadingDidChangeNotification:(id)arg1 ;
-(id)copyScriptViewController;
@end
