/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPKnownFieldRepeatedNumericValue.h>

@interface TSPKnownFieldRepeatedEnumValue : TSPKnownFieldRepeatedNumericValue {

	shared_ptr<google::protobuf::UnknownFieldSet>* _unknownFieldSet;

}
-(id)debugDescription;
-(id)initWithFieldDescriptor:(const FieldDescriptor*)arg1 fieldInfo:(const FieldInfo*)arg2 message:(const Message*)arg3 reflection:(const Reflection*)arg4 unknownFieldSet:(shared_ptr<google::protobuf::UnknownFieldSet>*)arg5 ;
-(void)mergeToUnknownFieldSet:(UnknownFieldSet*)arg1 ;
-(void)mergeToMessage:(Message*)arg1 reflection:(const Reflection*)arg2 ;
-(BOOL)hasUnknownValues;
@end
