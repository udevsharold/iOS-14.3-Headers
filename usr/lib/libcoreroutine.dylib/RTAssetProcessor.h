/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTDefaultsManager;

@interface RTAssetProcessor : NSObject {

	RTDefaultsManager* _defaultsManager;

}

@property (nonatomic,retain) RTDefaultsManager * defaultsManager;              //@synthesize defaultsManager=_defaultsManager - In the implementation block
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(RTDefaultsManager *)defaultsManager;
-(id)init;
-(id)initWithDefaultsManager:(id)arg1 ;
-(id)_objectForKey:(id)arg1 expectedClass:(Class)arg2 inDictionary:(id)arg3 ;
-(BOOL)_deviceSeed:(id)arg1 belongsToGroupId:(id)arg2 seedId:(id)arg3 modValue:(id)arg4 low:(id)arg5 high:(id)arg6 ;
-(BOOL)processAssetsAtPath:(id)arg1 intoPath:(id)arg2 outError:(id*)arg3 ;
@end
