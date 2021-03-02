/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IMCache.h>

@class NSString;

@interface IMBaseDiskCache : NSObject <IMCache> {

	NSString* _basePath;

}

@property (nonatomic,retain) NSString * basePath;                   //@synthesize basePath=_basePath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)initialize;
-(NSString *)basePath;
-(id)initWithBasePath:(id)arg1 ;
-(BOOL)isEmpty;
-(id)init;
-(void)setBasePath:(NSString *)arg1 ;
-(void)clearCache;
-(id)_allFiles;
-(id)pathForKey:(id)arg1 ;
-(void)removeItemsWithPrefx:(id)arg1 ;
-(void)removeItemForKey:(id)arg1 ;
-(BOOL)hasItemForKey:(id)arg1 ;
@end
