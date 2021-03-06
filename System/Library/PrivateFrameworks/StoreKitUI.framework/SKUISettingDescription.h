/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKUIViewElement, SKUISettingsGroupDescription;

@interface SKUISettingDescription : NSObject {

	SKUIViewElement* _viewElement;
	BOOL _editsValid;
	SKUISettingsGroupDescription* _parent;

}

@property (nonatomic,readonly) BOOL allowsSelection; 
@property (assign,nonatomic,__weak) SKUISettingsGroupDescription * parent;              //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) BOOL editsValid; 
@property (nonatomic,retain) SKUIViewElement * viewElement;                             //@synthesize viewElement=_viewElement - In the implementation block
+(BOOL)allowsEdit;
+(Class)_viewClassForSettingDescription:(id)arg1 ;
+(Class)viewClassForSettingDescription:(id)arg1 ;
-(id)indexPath;
-(void)reloadData;
-(BOOL)allowsSelection;
-(void)beginEditing;
-(BOOL)_isHidden;
-(void)_presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(SKUISettingsGroupDescription *)parent;
-(void)setParent:(SKUISettingsGroupDescription *)arg1 ;
-(SKUIViewElement *)viewElement;
-(void)setViewElement:(SKUIViewElement *)arg1 ;
-(void)_dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithViewElement:(id)arg1 parent:(id)arg2 ;
-(void)cancelEdits;
-(BOOL)commitEdits:(/*^block*/id)arg1 ;
-(void)discardEdits;
-(BOOL)editsValid;
-(void)handleSelectionOnCompletion:(/*^block*/id)arg1 ;
-(void)reloadWithViewElement:(id)arg1 parent:(id)arg2 ;
-(void)_deleteSetting;
-(void)_dispatchUpdate:(id)arg1 ;
-(void)_hideSetting;
-(BOOL)_initiallyHidden;
-(void)_reloadSetting;
-(void)_revealSetting;
-(void)_setEditsValid:(BOOL)arg1 ;
@end

