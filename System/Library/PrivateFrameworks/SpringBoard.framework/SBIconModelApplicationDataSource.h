/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol SBIconModelApplicationDataSource <NSObject>
@property (nonatomic,copy,readonly) NSArray * allApplications; 
@required
-(NSArray *)allApplications;
-(id)iconModel:(id)arg1 applicationWithBundleIdentifier:(id)arg2;
-(id)placeholdersByDisplayIDForIconModel:(id)arg1;

@end

