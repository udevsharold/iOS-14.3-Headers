/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/NewsstandKit.framework/NewsstandKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NewsstandKit/NewsstandKit-Structs.h>
@class NSArray, NKIssue, NSMapTable, NSURL, NSFileManager;

@interface NKLibrary : NSObject {

	NSArray* _issues;
	NKIssue* _currentlyReadingIssue;
	NSMapTable* _issuesByName;
	NSMapTable* _issuesByDirectory;
	NSURL* _contentURL;
	NSFileManager* _fileManager;
	NSURL* _appSupportURL;
	NSURL* _libraryURL;
	BOOL _inited;
	int _needsSaving;
	int _savePending;
	NSArray* _assetsFromLaunch;

}

@property (readonly) NSArray * issues; 
@property (readonly) NSArray * downloadingAssets; 
@property (retain) NKIssue * currentlyReadingIssue; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedLibrary;
+(BOOL)_isNewsstandApp;
-(void)_load;
-(NSArray *)issues;
-(id)init;
-(id)autorelease;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_fileManager;
-(unsigned long long)retainCount;
-(NSArray *)downloadingAssets;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(id)description;
-(id)retain;
-(void)_saveIfNeeded;
-(id)_contentURL;
-(id)_libraryURL;
-(oneway void)release;
-(void)_applicationWillTerminate:(id)arg1 ;
-(void)_didFinishLaunchingWasCalled;
-(void)_markIssuesAndSave;
-(id)issueWithName:(id)arg1 ;
-(void)_setIssues:(id)arg1 ;
-(NKIssue *)currentlyReadingIssue;
-(void)setCurrentlyReadingIssue:(NKIssue *)arg1 ;
-(void)_performBackgroundTask:(/*^block*/id)arg1 withDescription:(id)arg2 ;
-(void)_markAsDirtyAndSave;
-(id)_appSupportURL;
-(void)__actuallySave;
-(void)_saveIfNeededAfterDelay:(double)arg1 ;
-(void)_saveNowIfNeeded;
-(id)addIssueWithName:(id)arg1 date:(id)arg2 ;
-(void)removeIssue:(id)arg1 ;
-(id)_issueForDirectory:(id)arg1 ;
-(BOOL)_canPerformBackgroundDownloads;
-(void)_issueChanged:(id)arg1 ;
@end

