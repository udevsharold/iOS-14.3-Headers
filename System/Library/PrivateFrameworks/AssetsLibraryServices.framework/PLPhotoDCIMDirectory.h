/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class NSString, NSMutableArray, NSMutableDictionary;

@interface PLPhotoDCIMDirectory : NSObject {

	NSString* _dcimPath;
	NSString* _miscPath;
	NSString* _posterImagePath;
	NSMutableArray* _topLevelDirectories;
	CFDictionaryRef _topLevelDirectoriesByNumber;
	CFSetRef _unusableTopLevelDirectoryNumbers;
	int _lastUsedDirectoryNumber;
	NSMutableDictionary* _userInfo;
	BOOL _userInfoDidChange;
	flock* _dcimDirectoryLock;
	int _dcimDirectoryLockDescriptor;

}
-(void)saveUserInfo;
-(void)unlockDirectory;
-(id)nextAvailableDirectory;
-(void)lockDirectory;
-(id)initWithDCIMPath:(id)arg1 ;
-(id)posterImagePath;
-(void)recreateInfoPlist;
-(void)reloadUserInfo;
-(id)userInfoObjectForKey:(id)arg1 ;
-(id)dcfDirectories;
-(void)clearDCFDirectories;
-(BOOL)hasChangedExternally;
-(void)setHasChangedExternally:(BOOL)arg1 ;
-(void)dealloc;
-(id)userInfo;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(id)dcimPath;
-(id)miscPath;
-(id)_userInfoPath;
@end
