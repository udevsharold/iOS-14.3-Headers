/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSMutableSet;

@interface CoreDAVExpandPropertiesTask : CoreDAVPropertyFindBaseTask {

	NSMutableSet* _propertiesToExpand;

}

@property (nonatomic,retain) NSMutableSet * propertiesToExpand;              //@synthesize propertiesToExpand=_propertiesToExpand - In the implementation block
-(id)httpMethod;
-(id)description;
-(id)requestBody;
-(id)parseHints;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(void)setPropertiesToExpand:(NSMutableSet *)arg1 ;
-(void)addPropertyToExpandWithPropertiesToFind:(id)arg1 expandedName:(id)arg2 expandedNameSpace:(id)arg3 ;
-(NSMutableSet *)propertiesToExpand;
-(id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 expandedName:(id)arg3 expandedNameSpace:(id)arg4 ;
@end

