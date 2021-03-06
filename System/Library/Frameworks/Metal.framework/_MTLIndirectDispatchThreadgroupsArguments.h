/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Metal/Metal-Structs.h>
@interface _MTLIndirectDispatchThreadgroupsArguments : NSObject {

	SCD_Struct_MT31 _threadgroupsPerGrid;
	SCD_Struct_MT31 _threadsPerThreadgroup;

}

@property (assign,nonatomic) SCD_Struct_MT31 threadgroupsPerGrid;                //@synthesize threadgroupsPerGrid=_threadgroupsPerGrid - In the implementation block
@property (assign,nonatomic) SCD_Struct_MT31 threadsPerThreadgroup;              //@synthesize threadsPerThreadgroup=_threadsPerThreadgroup - In the implementation block
-(SCD_Struct_MT31)threadgroupsPerGrid;
-(void)setThreadgroupsPerGrid:(SCD_Struct_MT31)arg1 ;
-(SCD_Struct_MT31)threadsPerThreadgroup;
-(void)setThreadsPerThreadgroup:(SCD_Struct_MT31)arg1 ;
@end

