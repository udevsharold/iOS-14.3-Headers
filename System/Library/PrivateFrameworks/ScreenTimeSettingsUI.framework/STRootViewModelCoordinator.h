/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/STGroupFetchedResultsControllerDelegate.h>
#import <libobjc.A.dylib/STRootViewModelCoordinator.h>
@class STRootViewModel;


@protocol STRootViewModelCoordinator <NSObject>
@property (nonatomic,readonly) STRootViewModel * viewModel; 
@property (readonly) NSObject*<STContentPrivacyViewModelCoordinator> contentPrivacyCoordinator; 
@property (readonly) NSObject*<STUsageDetailsViewModelCoordinator> usageDetailsCoordinator; 
@property (readonly) NSObject*<STTimeAllowancesViewModelCoordinator> timeAllowancesCoordinator; 
@property (assign,nonatomic) BOOL hasShownMiniBuddy; 
@property (assign,nonatomic) BOOL hasAlreadyEnteredPINForSession; 
@property (getter=isPasscodeEnabled,nonatomic,readonly) BOOL passcodeEnabled; 
@required
-(STRootViewModel *)viewModel;
-(void)setScreenTimeSyncingEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)hasAlreadyEnteredPINForSession;
-(BOOL)validatePIN:(id)arg1;
-(void)setScreenTimeEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(NSObject*<STUsageDetailsViewModelCoordinator>)usageDetailsCoordinator;
-(void)setPIN:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)coordinatorForChild:(id)arg1 deviceIdentifier:(id)arg2 usageReportType:(id)arg3;
-(NSObject*<STContentPrivacyViewModelCoordinator>)contentPrivacyCoordinator;
-(void)setHasAlreadyEnteredPINForSession:(BOOL)arg1;
-(NSObject*<STTimeAllowancesViewModelCoordinator>)timeAllowancesCoordinator;
-(void)setPIN:(id)arg1 recoveryAltDSID:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)isPasscodeEnabled;
-(BOOL)hasShownMiniBuddy;
-(void)setHasShownMiniBuddy:(BOOL)arg1;
-(void)setShareWebUsageEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(void)enableScreenTimeWithPIN:(id)arg1 recoveryAltDSID:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end


@protocol STUsageDetailsViewModelCoordinator, STTimeAllowancesViewModelCoordinator, STContentPrivacyViewModelCoordinator;
@class STRootViewModel, NSObject, STAdminPersistenceController, STGroupFetchedResultsController, NSMutableDictionary, NSNumber, NSString;

@interface STRootViewModelCoordinator : NSObject <STGroupFetchedResultsControllerDelegate, STRootViewModelCoordinator> {

	BOOL _hasAlreadyEnteredPINForSession;
	BOOL _isLocalUser;
	NSObject*<STUsageDetailsViewModelCoordinator> _usageDetailsCoordinator;
	NSObject*<STTimeAllowancesViewModelCoordinator> _timeAllowancesCoordinator;
	NSObject*<STContentPrivacyViewModelCoordinator> _contentPrivacyCoordinator;
	STAdminPersistenceController* _persistenceController;
	STRootViewModel* _viewModel;
	STGroupFetchedResultsController* _fetchedResultsController;
	NSMutableDictionary* _coordinatorsByChildDSID;
	NSNumber* _userDSID;
	NSString* _deviceIdentifier;
	NSNumber* _usageReportType;
	long long _usageContext;
	NSString* _userName;

}

@property (readonly) STAdminPersistenceController * persistenceController;                                   //@synthesize persistenceController=_persistenceController - In the implementation block
@property (nonatomic,retain) STRootViewModel * viewModel;                                                    //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) STGroupFetchedResultsController * fetchedResultsController;                     //@synthesize fetchedResultsController=_fetchedResultsController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * coordinatorsByChildDSID;                                  //@synthesize coordinatorsByChildDSID=_coordinatorsByChildDSID - In the implementation block
@property (nonatomic,copy) NSNumber * userDSID;                                                              //@synthesize userDSID=_userDSID - In the implementation block
@property (copy,readonly) NSString * deviceIdentifier;                                                       //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (copy,readonly) NSNumber * usageReportType;                                                        //@synthesize usageReportType=_usageReportType - In the implementation block
@property (readonly) long long usageContext;                                                                 //@synthesize usageContext=_usageContext - In the implementation block
@property (nonatomic,copy) NSString * userName;                                                              //@synthesize userName=_userName - In the implementation block
@property (assign,nonatomic) BOOL isLocalUser;                                                               //@synthesize isLocalUser=_isLocalUser - In the implementation block
@property (assign,nonatomic) BOOL hasAlreadyEnteredPINForSession;                                            //@synthesize hasAlreadyEnteredPINForSession=_hasAlreadyEnteredPINForSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSObject*<STContentPrivacyViewModelCoordinator> contentPrivacyCoordinator;              //@synthesize contentPrivacyCoordinator=_contentPrivacyCoordinator - In the implementation block
@property (readonly) NSObject*<STUsageDetailsViewModelCoordinator> usageDetailsCoordinator;                  //@synthesize usageDetailsCoordinator=_usageDetailsCoordinator - In the implementation block
@property (readonly) NSObject*<STTimeAllowancesViewModelCoordinator> timeAllowancesCoordinator;              //@synthesize timeAllowancesCoordinator=_timeAllowancesCoordinator - In the implementation block
@property (assign,nonatomic) BOOL hasShownMiniBuddy; 
@property (getter=isPasscodeEnabled,nonatomic,readonly) BOOL passcodeEnabled; 
+(id)keyPathsForValuesAffectingUsageDetailsCoordinator;
+(id)keyPathsForValuesAffectingPasscodeEnabled;
+(id)loadViewModelFromManagedObjectContext:(id)arg1 isLocalUser:(BOOL)arg2 userDSID:(id)arg3 error:(id*)arg4 ;
-(NSString *)userName;
-(STRootViewModel *)viewModel;
-(NSString *)deviceIdentifier;
-(void)setScreenTimeSyncingEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)coordinatorsByChildDSID;
-(BOOL)hasAlreadyEnteredPINForSession;
-(id)init;
-(BOOL)validatePIN:(id)arg1 ;
-(void)setScreenTimeEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<STUsageDetailsViewModelCoordinator>)usageDetailsCoordinator;
-(void)setPIN:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)coordinatorForChild:(id)arg1 deviceIdentifier:(id)arg2 usageReportType:(id)arg3 ;
-(void)loadViewModelRightNow;
-(id)organizationIdentifierForUsage;
-(id)initWithUserDSID:(id)arg1 deviceIdentifier:(id)arg2 usageReportType:(id)arg3 usageContext:(long long)arg4 ;
-(void)groupResultsControllerDidChangeContents:(id)arg1 ;
-(void)setFetchedResultsController:(STGroupFetchedResultsController *)arg1 ;
-(STAdminPersistenceController *)persistenceController;
-(void)setIsLocalUser:(BOOL)arg1 ;
-(NSObject*<STContentPrivacyViewModelCoordinator>)contentPrivacyCoordinator;
-(void)setUserName:(NSString *)arg1 ;
-(void)_setPIN:(id)arg1 recoveryAltDSID:(id)arg2 shouldSetRecoveryAppleID:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(STGroupFetchedResultsController *)fetchedResultsController;
-(BOOL)isLocalUser;
-(void)_registerForWillResignActiveNotifications;
-(void)setCoordinatorsByChildDSID:(NSMutableDictionary *)arg1 ;
-(void)setHasAlreadyEnteredPINForSession:(BOOL)arg1 ;
-(NSObject*<STTimeAllowancesViewModelCoordinator>)timeAllowancesCoordinator;
-(void)_passcodeSessionHasEnded:(id)arg1 ;
-(void)saveViewModel:(id)arg1 ;
-(void)setPIN:(id)arg1 recoveryAltDSID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSNumber *)usageReportType;
-(BOOL)isPasscodeEnabled;
-(void)loadViewModelWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)hasShownMiniBuddy;
-(long long)usageContext;
-(void)_registerForPersistentStoreNotifications;
-(void)setViewModel:(STRootViewModel *)arg1 ;
-(void)setHasShownMiniBuddy:(BOOL)arg1 ;
-(NSNumber *)userDSID;
-(void)setUserDSID:(NSNumber *)arg1 ;
-(void)setShareWebUsageEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)enableScreenTimeWithPIN:(id)arg1 recoveryAltDSID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)organizationIdentifierForManagement;
@end

