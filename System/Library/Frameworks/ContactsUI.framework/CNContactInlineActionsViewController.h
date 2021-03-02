/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNActionsViewProtocol.h>
#import <libobjc.A.dylib/CNUIUserActionListConsumer.h>
#import <libobjc.A.dylib/CNContactActionsControllerDelegate.h>
#import <libobjc.A.dylib/CNUIObjectViewController.h>

@protocol CNUIObjectViewControllerDelegate, CNContactInlineActionsViewControllerDelegate, CNCustomPresentation, CNSchedulerProvider;
@class NSArray, NSDictionary, CNContactActionsController, CNUIContactsEnvironment, CNUIUserActionListDataSource, CNActionsView, CNContact, NSString, UIView;

@interface CNContactInlineActionsViewController : UIViewController <CNActionsViewProtocol, CNUIUserActionListConsumer, CNContactActionsControllerDelegate, CNUIObjectViewController> {

	BOOL _displaysUnavailableActionTypes;
	BOOL _displaysTitles;
	id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate;
	NSArray* _supportedActionTypes;
	double _actionTypesInterspace;
	long long _viewStyle;
	id<CNContactInlineActionsViewControllerDelegate> _delegate;
	NSArray* _actionItems;
	NSArray* _tokens;
	NSDictionary* _defaultActionPerType;
	id<CNCustomPresentation> _actionsControllerPresentation;
	id<CNSchedulerProvider> _schedulerProvider;
	CNContactActionsController* _actionsController;
	CNUIContactsEnvironment* _environment;
	CNUIUserActionListDataSource* _actionListDataSource;
	NSArray* _contacts;
	CNActionsView* _actionsView;

}

@property (nonatomic,copy) NSArray * actionItems;                                                                   //@synthesize actionItems=_actionItems - In the implementation block
@property (nonatomic,copy) NSArray * tokens;                                                                        //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,copy) NSDictionary * defaultActionPerType;                                                     //@synthesize defaultActionPerType=_defaultActionPerType - In the implementation block
@property (nonatomic,retain) id<CNCustomPresentation> actionsControllerPresentation;                                //@synthesize actionsControllerPresentation=_actionsControllerPresentation - In the implementation block
@property (nonatomic,retain) id<CNSchedulerProvider> schedulerProvider;                                             //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) double throttleDelay; 
@property (nonatomic,retain) CNContactActionsController * actionsController;                                        //@synthesize actionsController=_actionsController - In the implementation block
@property (nonatomic,retain) CNUIContactsEnvironment * environment;                                                 //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) CNUIUserActionListDataSource * actionListDataSource;                                   //@synthesize actionListDataSource=_actionListDataSource - In the implementation block
@property (nonatomic,retain) NSArray * contacts;                                                                    //@synthesize contacts=_contacts - In the implementation block
@property (assign,nonatomic,__weak) CNActionsView * actionsView;                                                    //@synthesize actionsView=_actionsView - In the implementation block
@property (assign,nonatomic) BOOL displaysUnavailableActionTypes;                                                   //@synthesize displaysUnavailableActionTypes=_displaysUnavailableActionTypes - In the implementation block
@property (assign,nonatomic) BOOL displaysTitles;                                                                   //@synthesize displaysTitles=_displaysTitles - In the implementation block
@property (nonatomic,retain) CNContact * contact; 
@property (nonatomic,copy) NSArray * supportedActionTypes;                                                          //@synthesize supportedActionTypes=_supportedActionTypes - In the implementation block
@property (assign,nonatomic) double actionTypesInterspace;                                                          //@synthesize actionTypesInterspace=_actionTypesInterspace - In the implementation block
@property (assign,nonatomic) long long viewStyle;                                                                   //@synthesize viewStyle=_viewStyle - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactInlineActionsViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic,__weak) id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate; 
+(id)descriptorForRequiredKeys;
-(NSArray *)contacts;
-(void)setTokens:(NSArray *)arg1 ;
-(NSArray *)tokens;
-(void)setContact:(CNContact *)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(void)reset;
-(void)dealloc;
-(void)performAction:(id)arg1 ;
-(long long)viewStyle;
-(CNContactActionsController *)actionsController;
-(void)setSchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
-(CNContact *)contact;
-(id<CNSchedulerProvider>)schedulerProvider;
-(BOOL)actionsView:(id)arg1 shouldPresentDisambiguationUIForAction:(id)arg2 ;
-(void)didSelectAction:(id)arg1 withSourceView:(id)arg2 longPress:(BOOL)arg3 ;
-(id<CNUIObjectViewControllerDelegate>)objectViewControllerDelegate;
-(void)setObjectViewControllerDelegate:(id<CNUIObjectViewControllerDelegate>)arg1 ;
-(CNActionsView *)actionsView;
-(void)contactActionsController:(id)arg1 didUpdateWithMenu:(id)arg2 ;
-(void)contactActionsController:(id)arg1 didSelectAction:(id)arg2 ;
-(void)setActionsController:(CNContactActionsController *)arg1 ;
-(void)setDelegate:(id<CNContactInlineActionsViewControllerDelegate>)arg1 ;
-(NSArray *)supportedActionTypes;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CNUIContactsEnvironment *)environment;
-(void)setEnvironment:(CNUIContactsEnvironment *)arg1 ;
-(void)loadView;
-(BOOL)displaysUnavailableActionTypes;
-(BOOL)_canShowWhileLocked;
-(void)setActionsView:(CNActionsView *)arg1 ;
-(id<CNContactInlineActionsViewControllerDelegate>)delegate;
-(double)throttleDelay;
-(id)initWithContactActionsContext:(id)arg1 ;
-(id)initWithActionListDataSource:(id)arg1 environment:(id)arg2 ;
-(void)setDisplaysUnavailableActionTypes:(BOOL)arg1 ;
-(void)updateDesiredTitleFontSizeIfNeeded;
-(void)displayAllSupportedTypesDisabled;
-(void)processModels:(id)arg1 ;
-(void)setDisplaysTitles:(BOOL)arg1 ;
-(void)setupSingleContactActions;
-(void)setSupportedActionTypes:(NSArray *)arg1 ;
-(void)setViewStyle:(long long)arg1 ;
-(NSArray *)actionItems;
-(void)checkinLaunchTasksForUndiscoverableActionsForContact:(id)arg1 ;
-(void)setActionTypesInterspace:(double)arg1 ;
-(void)removeVisibleActionItems:(id)arg1 ;
-(void)displayAdditionalActionItems:(id)arg1 ;
-(void)updateVisibleActionItems:(id)arg1 ;
-(void)viewDidLoad;
-(void)loadCachedActions;
-(void)discoverAvailableActionTypes;
-(id)makeActionItemForType:(id)arg1 ;
-(BOOL)displaysTitles;
-(void)displayActionForType:(id)arg1 withDefaultAction:(id)arg2 enabled:(BOOL)arg3 ;
-(void)removeActionForType:(id)arg1 ;
-(void)setActionItems:(NSArray *)arg1 ;
-(void)updateActionItem:(id)arg1 withDefaultAction:(id)arg2 ;
-(id)existingActionItemForType:(id)arg1 ;
-(void)setupGroupActions;
-(void)generateActionsControllerForActionType:(id)arg1 ;
-(BOOL)shouldShowDisambiguationForAction:(id)arg1 ;
-(id)allModelsObservable;
-(void)performGroupActionForType:(id)arg1 ;
-(BOOL)isGroupActionsView;
-(id)actionImageTextStyleForViewStyle:(long long)arg1 ;
-(double)actionTypesInterspace;
-(NSDictionary *)defaultActionPerType;
-(void)setDefaultActionPerType:(NSDictionary *)arg1 ;
-(id<CNCustomPresentation>)actionsControllerPresentation;
-(void)setActionsControllerPresentation:(id<CNCustomPresentation>)arg1 ;
-(CNUIUserActionListDataSource *)actionListDataSource;
-(void)setActionListDataSource:(CNUIUserActionListDataSource *)arg1 ;
@end
