/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RelevanceEngine/RelevanceEngine-Structs.h>
@class REClassLoader;

@interface RERelevanceProviderManagerLoader : NSObject {

	REClassLoader* _loader;

}
+(id)disabledRelevanceProviderManagerLoader;
+(id)relevanceProviderManagerLoaderWithDirectories:(id)arg1 relevanceProviderManagerKey:(id)arg2 ;
+(id)relevanceProviderManagerLoaderWithDirectories:(id)arg1 ;
+(id)relevanceProviderManagerLoaderWithBlock:(/*^block*/id)arg1 ;
+(id)aggregateRelevanceProviderManagerLoaderWithrelevanceProviderManagerLoaders:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)prewarm;
-(BOOL)isEqual:(id)arg1 ;
-(void)enumerateBundleConfigurations:(/*^block*/id)arg1 ;
-(void)enumerationDataSourceClassesWithBlock:(/*^block*/id)arg1 ;
@end
