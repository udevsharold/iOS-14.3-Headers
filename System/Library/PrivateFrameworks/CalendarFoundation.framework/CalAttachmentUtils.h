/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CalAttachmentUtils : NSObject
+(id)_stripSubdomain:(id)arg1 ;
+(id)_knownTLDForHostname:(id)arg1 ;
+(BOOL)attachmentURL:(id)arg1 matchesServerURL:(id)arg2 ;
+(id)legacyCalendarDataContainer;
+(id)legacyAttachmentContainerWithBaseURL:(id)arg1 ;
+(id)attachmentContainerWithBaseURL:(id)arg1 ;
+(id)getFileSizeForPath:(id)arg1 fileManager:(id)arg2 error:(id*)arg3 ;
+(id)localRelativePathForLocalAbsoluteURL:(id)arg1 localBaseURL:(id)arg2 ;
+(id)localURLForAttachmentWithRelativePath:(id)arg1 baseURL:(id)arg2 ;
+(id)attachmentContainerForSourceIdentifier:(id)arg1 calendarDataContainer:(id)arg2 ;
@end
