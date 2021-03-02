/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SubCalLocalDBHelper : NSObject
+(id)eventStoreWithClientId:(id)arg1 ;
+(BOOL)_updateConstraintsIfNecessaryForSource:(id)arg1 ;
+(id)_existingCalendarInCalDAVSourceWithExternalID:(id)arg1 inSource:(id)arg2 ;
+(id)_makeCalendarWithExternalId:(id)arg1 inStore:(id)arg2 error:(id*)arg3 ;
+(id)_relativePathFromCalDAVExternalID:(id)arg1 ;
+(id)initializeSourceWithExternalId:(id)arg1 inStore:(id)arg2 needsSave:(BOOL*)arg3 error:(id*)arg4 ;
+(id)initializeCalendarWithExternalId:(id)arg1 inSource:(id)arg2 needsSave:(BOOL*)arg3 error:(id*)arg4 ;
+(void)_setEventStoreProvider:(id)arg1 ;
@end
