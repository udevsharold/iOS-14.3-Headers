/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCDatabaseProvider;
@interface WFShareSheetWorkflowProvider : NSObject {

	id<VCDatabaseProvider> _databaseProvider;

}

@property (nonatomic,readonly) id<VCDatabaseProvider> databaseProvider;              //@synthesize databaseProvider=_databaseProvider - In the implementation block
-(id)initWithDatabaseProvider:(id)arg1 ;
-(id<VCDatabaseProvider>)databaseProvider;
-(id)shareSheetWorkflowsForExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)generateSingleUseTokenForWorkflowIdentifier:(id)arg1 ;
@end
