/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/PagesQuicklook.framework/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSTResolverContainerNameProvider <NSObject>
@optional
-(BOOL)isPendingTableNameUniquification;

@required
-(id)nameForResolverContainer:(id)arg1;
-(id)resolverContainerNameForResolver:(id)arg1;
-(id)resolverMatchingName:(id)arg1 contextContainerName:(id)arg2;
-(id)resolverContainerForName:(id)arg1 caseSensitive:(BOOL)arg2;
-(id)resolversMatchingPrefix:(id)arg1;
-(id)resolverContainerNamesMatchingPrefix:(id)arg1;
-(id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2;

@end

