/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLDeferredLogFormatter : NSObject {

	NSMutableArray* _entries;

}
+(id)_serializableDictionaryForEntry:(id)arg1 ;
+(id)_entityDescriptionForContext:(long long)arg1 ;
+(id)_logTypeForContext:(long long)arg1 ;
+(BOOL)_isManagedObjectPointerForContext:(long long)arg1 ;
-(id)stringWithFormat:(long long)arg1 ;
-(void)clear;
-(void)addLogWithContext:(long long)arg1 timestamp:(double)arg2 pointer:(unsigned long long)arg3 ;
-(id)init;
-(id)_plistString;
-(id)_formattedStringForPrinting;
-(id)_JSONStringPretty:(BOOL)arg1 ;
@end

