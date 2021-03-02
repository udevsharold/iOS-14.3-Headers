/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ATXHomeScreenConfigCache : NSObject {

	NSString* _rootPath;

}
+(BOOL)appPredictionPanelExistsInPage:(id)arg1 ;
+(BOOL)suggestionsWidgetExistsInPage:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(BOOL)writeTodayPageStacks:(id)arg1 appPredictionPanels:(id)arg2 error:(id*)arg3 ;
-(id)loadHomeScreenAndTodayPageConfigurationsFromJSONAtPath:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)_filePathForTodayPage;
-(id)_readDataFromFileAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)_writeData:(id)arg1 toFileAtPath:(id)arg2 ;
-(id)loadTodayStacksAndPanelsAsHomeScreenPageWithError:(id*)arg1 ;
-(id)loadDockAppListWithError:(id*)arg1 ;
-(id)loadHomeScreenAndTodayPageConfigurationsWithError:(id*)arg1 ;
-(BOOL)writeDockAppList:(id)arg1 error:(id*)arg2 ;
-(id)_filePathForDockConfig;
-(id)prettyPrintedJSON;
-(BOOL)writeHomeScreenPageConfigurations:(id)arg1 error:(id*)arg2 ;
-(id)_filePathForHomeScreenPageConfig;
-(id)loadHomeScreenPageConfigurationsWithError:(id*)arg1 ;
-(BOOL)_writeRootObject:(id)arg1 toFileAtPath:(id)arg2 error:(id*)arg3 ;
@end
