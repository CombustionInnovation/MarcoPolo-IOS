//
//  AppDelegateProtocol.h
//  Marco Polo
//
//  Created by Daniel Nasello on 12/1/14.
//  Copyright (c) 2014 Combustion Innovation Group. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol AppDelegateProtocol <NSObject>
-(void)pushNotificationHappened;
-(void)sendData:(NSDictionary *)obj:(NSString * )alertType:(NSString *)message;
@end
