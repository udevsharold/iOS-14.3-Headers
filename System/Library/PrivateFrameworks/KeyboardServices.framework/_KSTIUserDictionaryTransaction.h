/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _KSTIUserDictionaryEntryValue;

@interface _KSTIUserDictionaryTransaction : NSObject <NSSecureCoding> {

	_KSTIUserDictionaryEntryValue* _valueToDelete;
	_KSTIUserDictionaryEntryValue* _valueToInsert;

}

@property (nonatomic,retain) _KSTIUserDictionaryEntryValue * valueToDelete;              //@synthesize valueToDelete=_valueToDelete - In the implementation block
@property (nonatomic,retain) _KSTIUserDictionaryEntryValue * valueToInsert;              //@synthesize valueToInsert=_valueToInsert - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setValueToDelete:(_KSTIUserDictionaryEntryValue *)arg1 ;
-(_KSTIUserDictionaryEntryValue *)valueToInsert;
-(_KSTIUserDictionaryEntryValue *)valueToDelete;
-(id)initWithCoder:(id)arg1 ;
-(void)setValueToInsert:(_KSTIUserDictionaryEntryValue *)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
@end
