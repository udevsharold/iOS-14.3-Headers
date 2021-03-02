/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventBaseAttributes.h>

@interface BKSHIDEventRedirectAttributes : BKSHIDEventBaseAttributes {

	int _pid;

}

@property (assign,nonatomic) int pid;              //@synthesize pid=_pid - In the implementation block
+(id)protobufSchema;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(void)appendDescriptionToFormatter:(id)arg1 ;
@end
