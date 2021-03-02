/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/MobileContainerManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MCMContainerManager : NSObject
+(id)defaultManager;
-(id)init;
-(id)containerWithContentClass:(long long)arg1 identifier:(id)arg2 error:(id*)arg3 ;
-(id)containerWithContentClass:(long long)arg1 identifier:(id)arg2 createIfNecessary:(BOOL)arg3 existed:(BOOL*)arg4 error:(id*)arg5 ;
-(id)temporaryContainerWithContentClass:(long long)arg1 identifier:(id)arg2 existed:(BOOL*)arg3 error:(id*)arg4 ;
-(id)containersWithClass:(long long)arg1 error:(id*)arg2 ;
-(id)temporaryContainersWithClass:(long long)arg1 error:(id*)arg2 ;
-(id)deleteContainers:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)replaceContainer:(id)arg1 withContainer:(id)arg2 error:(id*)arg3 ;
-(BOOL)replaceContainer:(id)arg1 withContainer:(id)arg2 error:(id*)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)_containersWithClass:(long long)arg1 temporary:(BOOL)arg2 error:(id*)arg3 ;
@end
