/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libAppletTranslationLibrary.dylib/libAppletTranslationLibrary.dylib-Structs.h>
@interface DERLogContext : NSObject {

	CircularBuffer* circBuff;
	unsigned char circBuffStorage[6144];

}
-(id)init;
-(void)dealloc;
-(void)dumpLogs:(/*^block*/id)arg1 ;
@end

