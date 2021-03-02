/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACoreDAVGlue.framework/DACoreDAVGlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSRunLoop;


@protocol CoreDAVTaskManager <NSObject>
@property (nonatomic,retain) NSRunLoop * workRunLoop; 
@required
-(void)shutdown;
-(void)submitIndependentCoreDAVTask:(id)arg1;
-(void)submitQueuedCoreDAVTask:(id)arg1;
-(void)coreDAVTaskRequestModal:(id)arg1;
-(void)coreDAVTaskEndModal:(id)arg1;
-(void)coreDAVTaskDidFinish:(id)arg1;
-(NSRunLoop *)workRunLoop;
-(void)setWorkRunLoop:(id)arg1;

@end
