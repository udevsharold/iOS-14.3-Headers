/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDPersistence/IMDPersistence-Structs.h>
#import <IMDPersistence/IMAbstractDatabaseArchiver.h>

@interface IMAbstractDatabaseTrimmer : IMAbstractDatabaseArchiver
-(BOOL)copyDatabase:(/*^block*/id)arg1 ;
-(void)performMessageSelectionWithOperation:(IMDSqlOperation*)arg1 ;
-(BOOL)trimDatabaseWithOperation:(IMDSqlOperation*)arg1 ;
@end
