/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSBundle, NSDictionary;

@interface NSManagedObjectModelBundle : NSObject {

	NSBundle* _bundle;
	NSDictionary* _versionInfoDictionary;

}
-(id)bundle;
-(id)initWithPath:(id)arg1 ;
-(id)currentVersion;
-(void)dealloc;
-(id)_modelForVersionHashes:(id)arg1 ;
-(id)urlForModelVersionWithName:(id)arg1 ;
-(id)versionHashInfo;
-(id)currentVersionURL;
-(id)versionInfoDictionary;
-(id)modelVersions;
-(id)_modelForVersionHashes:(id)arg1 inStyle:(unsigned long long)arg2 ;
-(id)optimizedVersionURL;
@end
