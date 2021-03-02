/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSFileHandle, NSDateFormatter;

@interface PLModelMigratorLog : NSObject {

	NSFileHandle* _fileHandle;
	NSDateFormatter* _dateFormatter;

}
+(id)setup;
+(id)openWriteFileAtURL:(id)arg1 ;
-(id)new;
-(id)init;
-(id)initWithFileHandle:(id)arg1 ;
-(void)logFromCodeLocation:(SCD_Struct_PL39)arg1 subsystem:(id)arg2 level:(int)arg3 format:(const char*)arg4 ;
-(id)buildFormatString:(const char*)arg1 ;
-(id)initWithLogFileURL:(id)arg1 ;
-(void)logFromCodeLocation:(SCD_Struct_PL39)arg1 subsystem:(id)arg2 level:(int)arg3 message:(id)arg4 ;
@end
