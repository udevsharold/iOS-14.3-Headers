/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMUnitTestBundleLoader, IMUnitTestLogger;

@interface IMUnitTestFrameworkLoader : NSObject {

	BOOL _xctestFrameworkLoaded;
	IMUnitTestBundleLoader* _bundleLoader;
	IMUnitTestLogger* _logger;

}

@property (assign) BOOL xctestFrameworkLoaded;                                     //@synthesize xctestFrameworkLoaded=_xctestFrameworkLoaded - In the implementation block
@property (nonatomic,readonly) IMUnitTestBundleLoader * bundleLoader;              //@synthesize bundleLoader=_bundleLoader - In the implementation block
@property (readonly) IMUnitTestLogger * logger;                                    //@synthesize logger=_logger - In the implementation block
-(BOOL)loadFrameworkNamesFromTextFile:(id)arg1 outNames:(id*)arg2 error:(id*)arg3 ;
-(id)frameworkSearchPaths;
-(BOOL)loadFrameworks:(id)arg1 outError:(id*)arg2 ;
-(BOOL)findFrameworkPathsWithFrameworkNames:(id)arg1 searchPaths:(id)arg2 outFrameworkPaths:(id*)arg3 error:(id*)arg4 ;
-(BOOL)readXCTestFrameworkDependencies:(id*)arg1 error:(id*)arg2 ;
-(BOOL)loadXCTestFramework:(id*)arg1 ;
-(void)setXctestFrameworkLoaded:(BOOL)arg1 ;
-(BOOL)xctestFrameworkLoaded;
-(BOOL)frameworkExistsAtPath:(id)arg1 ;
-(BOOL)loadXCTestFrameworkFromSDK:(id*)arg1 ;
-(IMUnitTestLogger *)logger;
-(IMUnitTestBundleLoader *)bundleLoader;
-(id)initWithLogger:(id)arg1 bundleLoader:(id)arg2 ;
-(BOOL)loadTestFrameworks:(id*)arg1 ;
@end

