/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DALDAP/LDAPTask.h>

@class NSString;

@interface LDAPGetDefaultSearchBaseTask : LDAPTask {

	NSString* _defaultNamingContext;

}

@property (nonatomic,retain) NSString * defaultNamingContext;              //@synthesize defaultNamingContext=_defaultNamingContext - In the implementation block
-(void)_performQuery;
-(int)numDownloadedElements;
-(void)performTask;
-(void)finishWithError:(id)arg1 ;
-(id)daLevelErrorForLDAPError:(int)arg1 ;
-(void)setDefaultNamingContext:(NSString *)arg1 ;
-(NSString *)defaultNamingContext;
@end
